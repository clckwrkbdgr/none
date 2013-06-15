#include <unistd.h>
#include <stdio.h>
#include <getopt.h>
#define VERSION_STRING "1.0"

const char * USAGE =
	"none - utility for doing nothing.\n"
	"\n"
	"Usage: none [options]\n"
	"\n"
	"Options:\n"
	"  -v, --version      output version information and exit\n"
	"  -h, --help         display this help message and exit\n"
	;
const char * VERSION =
	"none " VERSION_STRING "\n"
	"Copyright (C) 2013 kp580bm1 (kp580bm1@gmail.com).\n"
	"Licensed under MIT license.\n"
	"This is free software: you are free to change and redistribute it.\n"
	"There is NO WARRANTY, to the extent permitted by law.\n"
	;

void usage()
{
	printf("%s", USAGE);
}

void version()
{
	printf("%s", VERSION);
}

void process_options(int argc, char ** argv)
{
	const struct option long_options[] = {
		{"help", 0, 0, 'h'},
		{"version", 0, 0, 'v'},
		{NULL, 0, NULL, 0},
	};
	const char * short_options = "hv";

	int c = 0;
	while((c = getopt_long(argc, argv, short_options, long_options, NULL)) != -1) {
		switch(c) {
			case 'h': usage(); return;
			case 'v': version(); return;
			default: break;
		}
	}
}

void do_nothing()
{
}

int main(int argc, char ** argv)
{
	process_options(argc, argv);
	do_nothing();
	return 0;
}
