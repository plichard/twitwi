use gl

import gl/Gl


import structs/ArrayList

Node: class {
	parent: This
	children: ArrayList<This>
	

	init: func(=parent){
		children = ArrayList<This> new()
	}
	
	
	draw: func {
	GL pushMatrix()
	GL translated(200,200,0)
	GL begin(QUADS)
		GL color3ub(240,240,240)
		GL vertex2d(-20, 10)
		GL vertex2d(20, 10)
		
		GL color3ub(100,100,100)
		GL vertex2d(20, -10)
		GL vertex2d(-20, -10)
	GL end()
	GL popMatrix()
	
	}
}
