# Example: SOURCES = hello.cpp \
#                    world.cpp
#          HEADERS = hello.h \
#                  = world.h

QT += widgets

SOURCES = src/main.cpp \
          src/progress_bar_demonstration.cpp \

HEADERS = src/progress_bar_demonstration.h

CONFIG -= app_bundle
CONFIG += c++11

DESTDIR = bin
OBJECTS_DIR = generated_files
MOC_DIR = generated_files