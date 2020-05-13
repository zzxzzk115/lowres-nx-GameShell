# lowres-nx-GameShell
custom compile. LowRes-NX for GameShell without resolution problem.(300 * 240).

**Just use**:

```bash
git clone https://github.com/zzxzzk115/lowres-nx-GameShell.git
cd lowres-nx-GameShell
sudo cp platform/LowRes\ NX\ GameShell/output/LowResNX ~/apps/emulators/
sudo cp -r 55_LowResNX ~/apps/Menu/
```

Put games in `~/games/LowResNX/`.

You can move PNG LOGO `55_LowResNX.png` by yourself.

**If you wanna compile :**

First of all:

```bash
git clone https://github.com/zzxzzk115/lowres-nx-GameShell.git
cd lowres-nx-GameShell
```

You can edit `sdl/main.c` for custom compile:

```bash
sudo nano sdl/main.c
```

Then:

```bash
cd platform/LowRes\ NX\ GameShell/
make -j6
```

and the executable file will be in `output` directory.

**Sceenshot:**

![](https://github.com/zzxzzk115/lowres-nx-GameShell/raw/master/screenshots/screenshot01.JPG)