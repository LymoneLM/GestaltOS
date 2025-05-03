//
// Created by LymoneChen on 25-4-29.
//
#include <SDL3/SDL.h>
#include <SDL3_image/SDL_image.h>
#include <SDL3_mixer/SDL_mixer.h>
#include <SDL3_ttf/SDL_ttf.h>

int GOStest() {
    SDL_Init(SDL_INIT_SENSOR | SDL_INIT_EVENTS | SDL_INIT_AUDIO | SDL_INIT_VIDEO);
    SDL_Window *window = SDL_CreateWindow(u8"标题", 1600, 900, 0);
    SDL_Renderer *renderer = SDL_CreateRenderer(window, nullptr);

    Mix_OpenAudio(0, nullptr);

    return 0;
}
