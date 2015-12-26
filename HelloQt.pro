# Example: SOURCES = hello.cpp \
#                    world.cpp
#          HEADERS = hello.h \
#                  = world.h

SOURCES = src/main.cpp

CONFIG -= app_bundle

DESTDIR = bin
OBJECTS_DIR = generated_files
MOC_DIR = generated_files