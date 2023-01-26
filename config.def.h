/* user and group to drop privileges to */
static const char *user  = "nobody";
#define COLORC "red"
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#444444",     /* after initialization */
	[INPUT] =  "#6e85b7",   /* during input */
	[FAILED] = "#E97777",   /* wrong password */
	[CAPS] = "#FEBE8C",         /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/*Enable blur*/
#define BLUR
/*Set blur radius*/
static const int blurRadius=5;
/*Enable Pixelation*/
//#define PIXELATION
/*Set pixelation radius*/
static const int pixelSize=0;

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;
