int mingtk_init(int argc, char *argv[], char *progname);
void quit_mingtk(void);
int bell(void);
int cvxy(float *x, float *y, int *ix, int *iy, int mode);
int define_color(char *color_name);
int erase(void);
int finig(void);
int get_focus(int *focus_id);
int grax(float lo_axis_val, float hi_axis_val, float *axis_tick_vals, int *n_vals, int yflag);
int hcopy(void);
int initg(int *win_size_x, int *win_size_y);
int ivect(int ix, int iy);
int limg(int nx, int ix, int ny, int iy);
int minig_fill(void);
int mspot(int nx, int ny);
int point(float x, float y);
int pspot(float x, float y);
int putg(char *text, int nc, int kad);
int retic(float *, float *, char *);
int save_xwg(char *in);
int set_focus(int focus_id);
int set_xwg(char *in);
int setcolor(int icol);
int symbg(int symbol, float x, float y, int size);
int trax(float nx, float ix, float ny, float iy, int axis_mode);
int vect(float x, float y);
int set_minig_color_rgb(int color_num, float red, float green, float blue);
int set_minig_line_width(int width);
