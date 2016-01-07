# Example: SOURCES = hello.cpp \
#                    world.cpp
#          HEADERS = hello.h \
#                  = world.h

QT += widgets

SOURCES = src/main.cpp \
          src/spin_box_demonstration.cpp \

HEADERS = src/spin_box_demonstration.h

CONFIG -= app_bundle
CONFIG += c++11

DESTDIR = bin
OBJECTS_DIR = generated_files
MOC_DIR = generated_files