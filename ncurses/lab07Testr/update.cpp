void update_pad(void *V)
{
    WIN *v = V;
    unsigned int i, ypos, xpos;
    int key;
     
    while((key = wgetch(v->p)) != 'q')
    {
        if(v->buffer[0] != '\0')
        {
            waddstr(v->p, v->buffer);
            v->buffer[0] = '\0';
             
            getyx(v->p, ypos, xpos);        /* Get the cursor position */
             
            if(ypos > v->starty + v->height - 1)
                v->row = ypos - (v->starty + v->height - 1);
        }
 
        wrefresh(v->w);
        prefresh(v->p, 
            v->row, 0,                        /* pmin        */
            v->starty, v->startx,             /* smin        */
                                            /* smax        */
            v->starty + v->height - 1, v->startx + v->width - 1);
         
        if(key == KEY_UP)
        {
            v->row -= 2;
            if(v->row < 0) v->row = -1;
        }
         
        if(key == KEY_DOWN) 
            v->row += 1;
             
        if(key == KEY_RESIZE)
        {
            getmaxyx(stdscr, v->rows, v->cols);
             v->height     = v->rows - 4 * LENGTH(Instr) - 1;
             v->width     = v->cols;
             delwin(v->w);
             v->w        = create_newwin(4 * LENGTH(Instr) + 1, v->width, v->height, 0);
        }
    }
     
    quit = true;
}