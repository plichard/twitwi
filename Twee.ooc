use sdl,gl
import structs/ArrayList
import Node
import sdl/[Sdl,Video,Event]
import gl/Gl
import glu/Glu
import Rect

usleep: extern func(Int)

Twee: class {
	x,y,bpp: Int
	view := View new(200,200,1)
	running := true
	
	root: Node
	current: Node
	focus: Node
	
	init: func {
		init(800,600,32)
	}
	
	init: func ~withRes(=x,=y,=bpp){
		root = Node new(null)   //the root node has obviously no parent =)
		openScreen(x,y,bpp)
		focus = root
	}
	
	openScreen: func(=x,=y,=bpp){
		SDL init(INIT_EVERYTHING)
		setRes(x,y,bpp)
	}
	
	setRes: func(=x,=y,=bpp) {
		SDLVideo setMode(x,y,bpp,OPENGL)
		GL matrixMode( PROJECTION )
		GL loadIdentity( )
		GLU ortho2D(0,800,0,600)
		}
	
	
	start: func {
		running = true
		event: Event = gc_malloc(Event size)
 
		while (running) {
			SDLEvent poll(event)

			match(event@ as EventStruct type)
			{
				case QUIT=>
					running = false
				case BUTTON_WHEELUP=>
					zoom(0.05)
				case BUTTON_WHEELDOWN=>
					zoom(-0.05)
			}
	 
			GL clear(COLOR_BUFFER_BIT)
			GL pushMatrix()
			GL translated(view x, view y, 0)
			GL scaled(view s, view s, 0)
			/*GL begin(QUADS);
				GL color3ub(0,0,255)
				GL vertex2d(50,50)
				GL vertex2d(50,400)
				GL color3ub(255,0,0)
				GL vertex2d(400,400)
				GL vertex2d(400,50)
			GL  end()*/
			root draw()
	 
			GL flush()
			SDLVideo glSwapBuffers()
			GL popMatrix()
			usleep(30000)
		}
	}
	
	zoom: func(z: Double) {
		view s += z
	}
}
