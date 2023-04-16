# GDB best practices

This is a small introduction to debugging ROS1/2 (C++) with gdb.
It targets beginners and intermediate gdb users.
Having started as a workshop, my vision for this package is a growing collection of frequently used
**best-practices**, documented here for myself and for others :)

## Build slides with `marp`

I use [marp](https://github.com/marp-team/marp-cli) to build pdf slides from markdown files which
keeps this repository compact and light-weight.

1. Get the binary from the [release page](https://github.com/marp-team/marp-cli/releases), that's easy without java dependencies on Linux.
2. Extract marp with `tar -xf ..` and use it directly inside this directory.
3. Create pdf slides with `./marp slides.md --allow-local-files -o slides.pdf`
4. Use the *server mode* to have instantaneous updates while changing things, e.g. with `./marp -p server slides.md`

