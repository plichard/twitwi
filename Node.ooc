import structs/ArrayList

Node: class {
	parent: This
	children: ArrayList<This>
	

	init: func(=parent){
		children = ArrayList<This> new()
	}
}
