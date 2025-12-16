## 2Planes
Nintendo Switch homebrew game

![img](https://i.imgur.com/ryDRCeh.png)

### Compilation

#### Prerequisites
1. Install [devkitPro](https://devkitpro.org/wiki/Getting_Started) with Switch development tools
2. Install required SDL2 libraries using devkitPro pacman:
```bash
dkp-pacman -S switch-sdl2 switch-sdl2_gfx switch-sdl2_image switch-sdl2_mixer switch-sdl2_ttf
```

#### Building
Run make from the project directory:
```bash
make
```
This will generate `2Planes_SWITCH-1.0.1.nro` which can be run on a Nintendo Switch with homebrew enabled.

To clean build artifacts:
```bash
make clean
```

### Changes from Original (v1.0.1-fixed)

This version includes fixes for compatibility with newer devkitPro/SDL2 libraries:

1. **Fixed background rendering crash** - The original code used `SDL_GetWindowSurface()` with `memcpy()` to draw backgrounds directly to the window surface. This is incompatible with SDL2's hardware-accelerated renderer created by `SDL_CreateWindowAndRenderer()`. The fix changes landscape classes to use `render->DrawTexture()` with pre-loaded textures instead.

2. **Updated Makefile library dependencies** - Newer devkitPro SDL2 packages require additional libraries to link properly:
   - Added: `-lEGL -lGLESv2 -lglapi -ldrm_nouveau` (graphics)
   - Added: `-lharfbuzz -lwebp -lopusfile -lopus` (font/image/audio dependencies)
   - Removed obsolete: `-lout123 -lstdc++`

### Release
[Download](https://github.com/mactec0/2Planes_SWITCH/releases/)
