# HCV
> HTML CSS View.  
> A simple tool for creating windows and popup messages using HTML and CSS.  
> _(Javascript sort of works as well)_

## Usage
> To create a Window:

    $ hcv <width> <height> <html> <is_url:int>

> For example:

    $ hcv 150 150 "<h1>hello</h1>" 0

> This will create a window looking like this:

![example.png](example.png)

> The possibilities are endless, for example here is how to create a  
> file viewer:

    $ hcv 640 480 "<pre>$(< myfile.txt)</pre>" 0

> Handle a button click:

    $ hcv 300 300 "<button id='btn'>Click</button><script>document.getElementById('btn').addEventListener('click', function() { alert(1); })</script>" 0

> You can also open a URL:

    $ hcv 640 480 "http://localhost/" 1

> the `1` in the end is important, this tells the program that you are using a URL.

## Accessing the file system and things like that
> To be able to access the file system, you could for example run a flask
> server under HCV. [Here is an example](https://github.com/sebbekarlsson/flask-hcv-example).

## Installing
> The requirements are:

* Qt5
* a C++ compiler (g++ for example)

### Linux
> Run this script to install on Linux:

    $ ./install.sh

### OSX
> Run this script to install on OSX:

    $ ./install-osx.sh
