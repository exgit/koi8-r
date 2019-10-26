TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt


HEADERS += \
    koi8r.h


SOURCES += \
    gen.c \
    koi8r.c


win32 {
QMAKE_LFLAGS += -static
}
