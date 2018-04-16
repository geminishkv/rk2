<<<<<<< HEAD
##Demo program for RK2

#This program displays the value of the environment variable NAME if it exists. Voevoda E & Shmakov I & Chepik P
BMSTU IU8-21M

[![Build Status](https://travis-ci.org/geminishkv/lr4.svg?branch=master)](https://travis-ci.org/geminishkv/lr4)


#RK2_release_crossdev


##Edit working(Build):

#    for unix systems, because uses .gitignore 
$ git clone https://github.com/geminishkv/lr4 or https://github.com/Neisoweli/lr4
$ cd 
$ cmake -H. -B_builds
$ cmake --build _builds

For fork crossdev:
$ git pull origin master
$ git add .
$ git commit -m"..."
$ git push origin master
=======
# Demo program for RK2

This program displays the value of the environment variable NAME if it exists.
Voevoda E & Shmakov I
BMSTU IU8-21M

Warnings:
$ travis lint

Tests:

$ _build/check -s -r compact
$ cmake --build _build --target test -- ARGS=--verbose

interprice doxygen:
$ cat docs/doxygen.conf | less

