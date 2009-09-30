use sdl
import sdl/Sdl

EventStruct: cover from SDL_Event {
	type: extern Int
}

Event: cover from EventStruct*

BUTTON_LEFT: extern( SDL_BUTTON_LEFT) const Int
BUTTON_MIDDLE: extern( SDL_BUTTON_MIDDLE) const Int
BUTTON_RIGHT: extern( SDL_BUTTON_RIGHT)const Int
BUTTON_WHEELUP: extern (SDL_BUTTON_WHEELUP )const Int
BUTTON_WHEELDOWN: extern( SDL_BUTTON_WHEELDOWN )const Int


SDLEvent: cover {
	wait: extern(SDL_WaitEvent) static func(Event) -> Int
	poll: extern(SDL_PollEvent) static func(Event) -> Int
}
