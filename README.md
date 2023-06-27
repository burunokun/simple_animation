# Simple graphics rendering in C

This is a simple graphics rendering program written in C using raylib.

![](./sample.gif)

### Quick Start

Make sure to have Raylib installed and in case `build.sh` fails,<br>
run the command below:
```console
export PKG_CONFIG_PATH=path/to/raylib/lib/pkgconfig/
```

After that, just run `build.sh` and enjoy this beautiful yet simple "dvd logo"<br>
bouncing style animation.
```console
./build.sh && ./main
```

### TODO

- [x] Render a rectangle;
- [x] Make the rectangle move within the screen;
- [x] Render a circle;
- [x] Make the circle move within the screen;
- [x] Reproduce the dvd logo screen;
- [x] Make a gif;
- [ ] Implement Hot Reloading;

---

### NOTES

- How to make a gif:
  1. Get the screen info with the `xwininfo` command;
    ```
    ...[xwininfo output]...
    -geometry 800x600+283+84
    ```
  2. Run the whatever you want to make a gif from with the command below;
    ```console
    $ ffmpeg -video_size 800x600 -f x11grab -i :0.0+283,84 output.gif
    ```
  3. Check your gif with the `animate` command. **imagemagick** needed
    ```console
    $  animate output.gif
    ```
