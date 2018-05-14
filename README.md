# HCV
> HTML CSS View.  
> A simple tool for creating windows and popup messages using HTML and CSS.  
> _(Javascript sort of works as well)_

> [LICENSE](LICENSE.md)

## Usage
> To create a Window:

    $ hcv -w <width> -h <height> -c <html/contents> -u <url>

> For example:

    $ hcv -w 150 -h 150 -c "<h1>hello</h1>"

> This will create a window looking like this:

![example.png](example.png)

> The possibilities are endless, for example here is how to create a  
> file viewer:

    $ hcv -w 640 -h 480 -c "<pre>$(< myfile.txt)</pre>"

> Handle a button click:

    $ hcv -w 300 -h 300 -c "<button id='btn'>Click</button><script>document.getElementById('btn').addEventListener('click', function() { alert(1); })</script>"

> You can also open a URL:

    $ hcv -w 640 -h 480 -u "http://localhost/"

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
