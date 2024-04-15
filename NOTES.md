Download json from https://config.qmk.fm/#/splitkb/aurora/sweep/rev1/LAYOUT_split_3x5_2

Update keymap_gen.c:
qmk json2c /path/to/gridbugs.json > keyboards/splitkb/aurora/sweep/keymaps/gridbugs/keymap_gen.c

Compile the uf2 file:
qmk compile -kb splitkb/aurora/sweep/rev1 -km gridbugs -e CONVERT_TO=liatris

Double tap reset button to go into flashing mode
The keyboard will turn into a usb drive. Mount it.

Copy the uf2 file to the usb drive.
The usb drive will turn back into a keyboard.
