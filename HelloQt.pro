# Example: SOURCES = hello.cpp \
#                    world.cpp
#          HEADERS = hello.h \
#                  = world.h

QT += widgets

SOURCES = src/main.cpp \
          src/timer_demonstration.cpp \

HEADERS = src/timer_demonstration.h

CONFIG -= app_bundle

DESTDIR = bin
OBJECTS_DIR = generated_files
MOC_DIR = generated_files