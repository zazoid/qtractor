#ifndef CONFIG_H
#define CONFIG_H

/* Define to the full name of this package. */
#define PACKAGE_NAME "Qtractor"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "Qtractor 0.9.35"

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.9.35"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "rncbc@rncbc.org"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "qtractor"

/* Define to the version of this package. */
#define CONFIG_VERSION "0.9.35"

/* Define to the build version of this package. */
#define CONFIG_BUILD_VERSION "0.9.35"

/* Default installation prefix. */
#define CONFIG_PREFIX "/usr"

/* Define to target installation dirs. */
#define CONFIG_BINDIR "/usr/bin"
#define CONFIG_LIBDIR "/usr/lib"
#define CONFIG_DATADIR "/usr/share"
#define CONFIG_MANDIR "/usr/share/man"

/* Define if debugging is enabled. */
/* #undef CONFIG_DEBUG */

/* Define to 1 if you have the <signal.h> header file. */
#define HAVE_SIGNAL_H 1

/* Define if IEEE 32bit float optimizations are enabled. */
#define CONFIG_FLOAT32 1

/* Define if round is available. */
#define CONFIG_ROUND 1

/* Define if JACK library is available. */
#define CONFIG_LIBJACK 1

/* Define if ALSA library is available. */
#define CONFIG_LIBASOUND 1

/* Define if SNDFILE library is available. */
#define CONFIG_LIBSNDFILE 1

/* Define if VORBIS library is available. */
#define CONFIG_LIBVORBIS ON

/* Define if MAD library is available. */
#define CONFIG_LIBMAD ON

/* Define if SAMPLERATE library is available. */
#define CONFIG_LIBSAMPLERATE ON

/* Define if RUBBERBAND library is available. */
#define CONFIG_LIBRUBBERBAND ON

/* Define if AUBIO library is available. */
#define CONFIG_LIBAUBIO ON

/* Define if LIBLO library is available. */
#define CONFIG_LIBLO ON

/* Define if ZLIB library is available. */
#define CONFIG_LIBZ ON

/* Define if LILV library is available. */
#define CONFIG_LIBLILV 1

/* Define if lilv_file_uri_parse is available. */
#define CONFIG_LILV_FILE_URI_PARSE 1

/* Define if lilv_world_unload_resource is available. */
#define CONFIG_LILV_WORLD_UNLOAD_RESOURCE 1

/* Define if SUIL library is enabled. */
/* #undef CONFIG_LIBSUIL */

/* Define if suil_instance_get_handle is available. */
/* #undef CONFIG_SUIL_INSTANCE_GET_HANDLE */

/* Define if JACK latency support is available. */
#define CONFIG_JACK_LATENCY ON

/* Define if LADSPA header is available. */
#define CONFIG_LADSPA ON

/* Define if DSSI header is available. */
#define CONFIG_DSSI ON

/* Define if VST2 header is available. */
#define CONFIG_VST2 ON

/* Define if VeSTige header is available. */
#define CONFIG_VESTIGE ON

/* Define if LV2 headers are available. */
#define CONFIG_LV2 ON

/* Define if LV2 UI support is available. */
#define CONFIG_LV2_UI ON

/* Define if LV2 Event/MIDI support is available. */
/* #undef CONFIG_LV2_EVENT */

/* Define if LV2 Atom/MIDI aupport is available. */
#define CONFIG_LV2_ATOM ON

/* Define if LV2 CVPort aupport is available. (DUMMY) */
#define CONFIG_LV2_CVPORT ON

/* Define if lv2_atom_forge_object is available. */
#define CONFIG_LV2_ATOM_FORGE_OBJECT ON

/* Define if lv2_atom_forge_key is available. */
#define CONFIG_LV2_ATOM_FORGE_KEY ON

/* Define if LV2 Worker/Schedule aupport is available. */
#define CONFIG_LV2_WORKER ON

/* Define if LV2 External UI extension is available. */
#define CONFIG_LV2_EXTERNAL_UI ON

/* Define if LV2 State extension is available. */
#define CONFIG_LV2_STATE ON

/* Define if LV2 State Files feature is available. */
#define CONFIG_LV2_STATE_FILES ON

/* Define if LV2 State Make Path feature is available. */
/* #undef CONFIG_LV2_STATE_MAKE_PATH */

/* Define if LV2 Programs extension is available. */
#define CONFIG_LV2_PROGRAMS ON

/* Define if LV2 MIDNAM extension is available. */
#define CONFIG_LV2_MIDNAM ON

/* Define if LV2 Presets are supported. */
#define CONFIG_LV2_PRESETS ON

/* Define if LV2 Patch is supported. */
#define CONFIG_LV2_PATCH ON

/* Define if LV2 Port-event is supported. */
#define CONFIG_LV2_PORT_EVENT ON

/* Define if LV2 Time is supported. */
#define CONFIG_LV2_TIME ON

/* Define if LV2 Options is supported. */
#define CONFIG_LV2_OPTIONS ON

/* Define if LV2 Buf-size is supported. */
#define CONFIG_LV2_BUF_SIZE ON

/* Define if LV2 Parameters is supported. */
#define CONFIG_LV2_PARAMETERS ON

/* Define if LV2 Time/position support is available. */
#define CONFIG_LV2_TIME_POSITION ON

/* Define if LV2 UI Touch interface support is available. */
#define CONFIG_LV2_UI_TOUCH ON

/* Define if LV2 UI Request-value support is available. */
#define CONFIG_LV2_UI_REQ_VALUE ON

/* Define if LV2 UI Request-value support is available. (FAKE) */
/* #undef CONFIG_LV2_UI_REQ_VALUE_FAKE */

/* Define if LV2 UI Idle interface support is available. */
#define CONFIG_LV2_UI_IDLE ON

/* Define if LV2 UI Show interface support is available. */
#define CONFIG_LV2_UI_SHOW ON

/* Define if libsuil_gtk2_in_qt5 is available. */
/* #undef CONFIG_LIBSUIL_GTK2_IN_QT5 */

/* Define if LV2 UI GTK2 native support is available. */
#define CONFIG_LV2_UI_GTK2 ON

/* Define if LV2 UI GTKMM2 native support is available. */
#define CONFIG_LV2_UI_GTKMM2 ON

/* Define if libsuil_x11_in_qt5 is available. */
/* #undef CONFIG_LIBSUIL_X11_IN_QT5 */

/* Define if LV2 UI X11 native support is available. */
#define CONFIG_LV2_UI_X11 ON

/* Define if VST3 plug-in support is avilable. */
/* #undef CONFIG_VST3 */

/* Define if CLAP plug-in support is avilable. */
#define CONFIG_CLAP ON

/* Define if JACK session support is available. */
#define CONFIG_JACK_SESSION ON

/* Define if JACK metadata support is available. */
#define CONFIG_JACK_METADATA ON

/* Define if jack_set_port_rename_callback is available. */
#define CONFIG_JACK_PORT_RENAME 1

/* Define if NSM support is available. */
#define CONFIG_NSM ON

/* Define if unique/single instance is enabled. */
/* #undef CONFIG_XUNIQUE */

/* Define if gradient eye-candy is enabled. */
#define CONFIG_GRADIENT ON

/* Define if debugger stack-trace is enabled. */
/* #undef CONFIG_STACKTRACE */

/* Define if Wayland is supported (NOT RECOMMENDED) */
/* #undef CONFIG_WAYLAND */

#endif /* CONFIG_H */
