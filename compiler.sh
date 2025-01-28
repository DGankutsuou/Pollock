#!bin/bash
cc polloc.c libmlx_Linux.a -Lmlx_linux -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz -o art