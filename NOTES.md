Download json from https://config.qmk.fm/#/splitkb/kyria/rev3/LAYOUT

Update keymap.c:
qmk json2c /path/to/gridbugs.json > keyboards/splitkb/kyria/keymaps/gridbugs/keymap.c

Compile the uf2 file:
qmk compile -e CONVERT_TO=liatris

Double tap reset button to go into flashing mode
The keyboard will turn into a usb drive. Mount it.

Copy the uf2 file to the usb drive.
The usb drive will turn back into a keyboard.
