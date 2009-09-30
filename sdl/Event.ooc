use sdl
import sdl/Sdl

EventStruct: cover from SDL_Event {
	type: extern Int
}

Event: cover from EventStruct*

SDLEvent: cover {
	wait: extern(SDL_WaitEvent) static func(Event) -> Int
	poll: extern(SDL_PollEvent) static func(Event) -> Int
}
