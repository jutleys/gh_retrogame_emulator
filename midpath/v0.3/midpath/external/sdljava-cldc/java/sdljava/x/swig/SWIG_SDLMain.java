/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version: 1.3.22
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package sdljava.x.swig;

public class SWIG_SDLMain implements SWIG_SDLMainConstants {
  public static int SDL_Init(long flags) {
    return SWIG_SDLMainJNI.SDL_Init(flags);
  }

  public static int SDL_InitSubSystem(long flags) {
    return SWIG_SDLMainJNI.SDL_InitSubSystem(flags);
  }

  public static void SDL_QuitSubSystem(long flags) {
    SWIG_SDLMainJNI.SDL_QuitSubSystem(flags);
  }

  public static long SDL_WasInit(long flags) {
    return SWIG_SDLMainJNI.SDL_WasInit(flags);
  }

  public static void SDL_Quit() {
    SWIG_SDLMainJNI.SDL_Quit();
  }

  public static SDL_version SWIG_SDL_VERSION() {
    return new SDL_version(SWIG_SDLMainJNI.SWIG_SDL_VERSION(), true);
  }

  public static String SDL_GetError() {
    return SWIG_SDLMainJNI.SDL_GetError();
  }

}