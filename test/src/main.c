/*
 *--------------------------------------
 * Program Name: Demo
 * Author: Alvajoy 'Alvajoy123' Asante
 * Description: GFX3 Demo
 *--------------------------------------
 */

#include <tice.h>
#include <graphx.h>
#include <keypadc.h>

#include "gfx/bus/bus.h"

// Must include in order to use gfx3
#include "gfx3/gfx3.h"

// Sprites
gfx_sprite_t *sprites[23] = {bus1,
                             bus2,
                             bus3,
                             bus4,
                             bus5,
                             bus6,
                             bus7,
                             bus8,
                             bus9,
                             bus10,
                             bus11,
                             bus12,
                             bus13,
                             bus14,
                             bus15,
                             bus16,
                             bus17,
                             bus18,
                             bus19,
                             bus20,
                             bus21,
                             bus22,
                             NULL};

// Creates a car object
struct gfx3_object_t objectA;
struct gfx3_object_t objectB;

int main(void)
{
    uint8_t x = 0;

    // Set Sprites
    // gfx3_SetObjectCompressedSprites(&object, sprites, teapot1_width, teapot1_height);
    gfx3_SetObjectSprites(&objectA, sprites);
    gfx3_SetObjectSprites(&objectB, sprites);

    /* Initialize graphics drawing */
    gfx_Begin();

    /* Set the palette used by the sprites */
    gfx_SetPalette(global_palette, sizeof_global_palette, 0);

    /* Draw to buffer to avoid artifacts */
    gfx_SetDrawBuffer();

    // New feature!
    gfx3_FlipObject(&objectA); 

    // testing offsetting 
    // gfx3_SetObjectOffset(&object, 1, 1);

    
    while(!os_GetCSC())
    {
        /* Draw a rotated transparent scaled spite */
        gfx3_RotateObject(&objectA, x);
        gfx3_RotateObject(&objectB, x);
        gfx3_TransparentObject(&objectA, ((LCD_WIDTH - (bus1_width*2)) / 2), ((LCD_HEIGHT - (bus1_height*2)) / 2));
        gfx3_TransparentObject(&objectB, ((LCD_WIDTH + (bus1_width*2)) / 2), ((LCD_HEIGHT + (bus1_height*2)) / 2));

        /* Show the buffered screen */
        gfx_BlitBuffer();

        /* Clear the old drawn sprite */
        gfx_FillScreen(1);

        /* Change the rotation amount */
        x += 5;

    }

    /* End graphics drawing */
    gfx_End();

    return 0;
}
