use sdl,gl
import structs/ArrayList
import Node
import sdl/[Sdl,Video,Event]
import gl/Gl
import glu/Glu

Twee: class {
	x,y,bpp: Int
	running := true
	
	root: Node
	current: Node
	
	init: func {
		root = Node new(null)   //the root node has obviously no parent =)
	}
	
	openScreen: func(=x,=y,=bpp){
		SDL init(INIT_EVERYTHING)
		setRes(x,y,bpp)
	}
	
	setRes: func(=x,=y,=bpp) {
		SDLVideo setMode(x,y,bpp,OPENGL)
		//GL matrixMode(PROJECTION )
		//GL loadIdentity()
		//GLU perspective(70,x/y as Double,0.001,100)
		//GL viewport(0,0,x,y)
		//GL enable(DEPTH_TEST);
		//glEnable(GL_TEXTURE_2D);
		}
	
	
	start: func {
		running = true
		event: Event
 
    while (running) {
		SDLEvent poll(event)

        match(event@ as EventStruct type)
        {
            case QUIT=>
                running = false
        }
 
        GL clear(COLOR_BUFFER_BIT);
 
        /*glBegin(GL_QUADS);
            glColor3ub(0,0,255);
            glVertex2d(-0.75,-0.75);
            glVertex2d(-0.75,0.75);
            glColor3ub(255,0,0);
            glVertex2d(0.75,0.75);
            glVertex2d(0.75,-0.75);
        glEnd();*/
 
        GL flush()
		SDLVideo glSwapBuffers()
		}
	}
}
