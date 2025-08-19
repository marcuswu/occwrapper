# OCCWrapper
A C  wrapper for Open Cascade

I am using this repository as part of another project of mine. I don't intent to write wrappers for the entire Open Cascade API. The project is open to pull requests for functionality others need.

## Dependencies for Open CASCADE
* ccmake (for building)
* tcl, tcl-dev, tk, tk-dev
* opengl dev packages (libgl-dev, libegl-dev)
* freetype
* libfontconfig-dev

## Getting Started

### Installing opencascade binaries
This is the recommended and fastest option
Installing the data-exchange packages will install all of the dependent occt packages necessary

```
apt install libocct-data-exchange-7.6
apt install libocct-data-exchange-dev
```

### Building opencascade from source
* [Download Open CASCADE](https://dev.opencascade.org/release)
* `mkdir ~/src/occt`
* `cd ~/src/occt`
* `ccmake [path_to_open_cascade_src]`
** `configure`
** `make`
** sit back and wait :beer:
** `sudo make install`
* `mkdir ~/src/occwrapperBuild`
* `cd ~/src/occwrapperBuild`
* `cmake [path_to_occwrapper_src]`
* `make`
* `sudo make install`

