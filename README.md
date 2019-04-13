This is a modified st to fit my needs. Mailing lists of all suckless
projects and wikis with link of every versions of patches instead of
git repos are too inconvenient for me.

Notable changes:
- Scrollback buffer patch with small fixes, eg. can't scroll back more than
  was written, no scrollback on alternate screen
- Scrolling with mouse, patch on suckless wiki was buggy
- Decreased latency: instead of using fixed fps redraw (almost) as soon as possible,
  except when there is a lot of text then back to fixed fps for speed
- Small artificial delay added after input to fight flickering eg. 
  mpv status line. May still flicker ocassionally. Sadly it's a 
  compromise between latency and flickering
- Xresources patch

st - simple terminal
--------------------
st is a simple terminal emulator for X which sucks less.


Requirements
------------
In order to build st you need the Xlib header files.


Installation
------------
Edit config.mk to match your local setup (st is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install st (if
necessary as root):

    make clean install


Running st
----------
If you did not install st with make clean install, you must compile
the st terminfo entry with the following command:

    tic -sx st.info

See the man page for additional details.

Credits
-------
Based on Aurélien APTEL <aurelien dot aptel at gmail dot com> bt source code.

