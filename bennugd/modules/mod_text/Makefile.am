## Process this file with automake to produce Makefile.in

#AUTOMAKE_OPTIONS = no-dependencies foreign

lib_LTLIBRARIES = libmod_text.la

libmod_text_la_SOURCES = mod_text.c
libmod_text_la_CFLAGS = $(COMMON_CFLAGS) -I$(BGD_PATH)/include -I$(BGD_PATH)/bgdrtm/include -I. -I../libtext/ -I../libfont/ -I../libgrbase/
libmod_text_la_LDFLAGS = -s -module -no-undefined -avoid-version
libmod_text_la_LIBADD = $(COMMON_LDFLAGS) -L$(BGD_PATH)/bgdrtm/src/.libs -lbgdrtm -L../libtext/.libs  -L../libfont/.libs -L../libgrbase/.libs -ltext -lfont -lgrbase

## Make sure these will be cleaned even when they're not built by
## default.
CLEANFILES = libmod_text.la
