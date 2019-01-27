/* See LICENSE for license details. */

enum win_mode {
	WMODE_VISIBLE     = 1 << 0,
	WMODE_FOCUSED     = 1 << 1,
	WMODE_APPKEYPAD   = 1 << 2,
	WMODE_MOUSEBTN    = 1 << 3,
	WMODE_MOUSEMOTION = 1 << 4,
	WMODE_REVERSE     = 1 << 5,
	WMODE_KBDLOCK     = 1 << 6,
	WMODE_HIDE        = 1 << 7,
	WMODE_APPCURSOR   = 1 << 8,
	WMODE_MOUSESGR    = 1 << 9,
	WMODE_8BIT        = 1 << 10,
	WMODE_BLINK       = 1 << 11,
	WMODE_FBLINK      = 1 << 12,
	WMODE_FOCUS       = 1 << 13,
	WMODE_MOUSEX10    = 1 << 14,
	WMODE_MOUSEMANY   = 1 << 15,
	WMODE_BRCKTPASTE  = 1 << 16,
	WMODE_NUMLOCK     = 1 << 17,
	WMODE_ALTSCREEN   = 1 << 18,
	WMODE_MOUSE       = WMODE_MOUSEBTN|WMODE_MOUSEMOTION|WMODE_MOUSEX10\
	                   |WMODE_MOUSEMANY,
};

void xbell(void);
void xclipcopy(void);
void xdrawcursor(int, int, Glyph, int, int, Glyph);
void xdrawline(Line, int, int, int);
void xfinishdraw(void);
void xloadcols(void);
int xsetcolorname(int, const char *);
void xsettitle(char *);
int xsetcursor(int);
void xsetmode(int, unsigned int);
void xsetpointermotion(int);
void xsetsel(char *);
int xstartdraw(void);
