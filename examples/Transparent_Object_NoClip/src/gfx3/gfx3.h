/**
 * @file gfx3.h
 * @brief This file contains the sprite stacking library
 *
 * @author Alvajoy "Alvajoy123" Asante
 * @version 1.0
 * @copyright Copyright (c) 2018 - 2022
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef GFX3_H
#define GFX3_H

#include <tice.h>
#include <graphx.h>

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

	struct gfx3_object_t
	{
		gfx_sprite_t **layers;
		unsigned char **compressed_layers;

		// compressed object management
		bool compressed;
		uint16_t width;
		uint8_t height;

		// x and y offset of stacking
		uint16_t x_offset;
		uint8_t y_offset;

		// x and y scale of sprite.
		uint8_t scale;

		// rotation angle.
		uint8_t angle;
	};

	// Active Objects
	/**
	 * Sets the sprites layer/sprites.
	 * @param gfx3_object gfx3_object_t structure.
	 * @param sprites a array of sprites
	 */
	void gfx3_SetObjectSprites(struct gfx3_object_t *gfx3_object, gfx_sprite_t **sprites);

	/**
	 * Sets the sprites layer/sprites.
	 * @param gfx3_object gfx3_object_t structure.
	 * @param sprites array of pointers to compressed sprites.
	 * @param width Width of the compressed sprite
	 * @param height Height of the compressed sprite
	 *
	 * @note All sprites must be the same size.
	 */
	void gfx3_SetObjectCompressedSprites(struct gfx3_object_t *gfx3_object, unsigned char **sprites, uint16_t width, uint8_t height);

	// other setting

	/**
	 * Sets the scales of the sprites layers.
	 * @param gfx3_object gfx3_object_t structure.
	 * @param scale scale of object.
	 */
	void gfx3_SetObjectScale(struct gfx3_object_t *gfx3_object, uint8_t scale);

	/**
	 * Sets the layering offset.
	 * @param gfx3_object gfx3_object_t structure.
	 * @param x_offset X offset of layering object.
	 * @param y_offset Y offset of layering object.
	 */
	void gfx3_SetObjectOffset(struct gfx3_object_t *gfx3_object, uint8_t x_offset, uint8_t y_offset);

	/**
	 * Sets the object angle.
	 * @param gfx3_object gfx3_object_t structure.
	 * @param angle angle of object.
	 */

	void gfx3_SetObjectAngle(struct gfx3_object_t *gfx3_object, uint8_t angle);

	/**
	 * Sets the object angle.
	 * @param gfx3_object gfx3_object_t structure.
	 * @param width Width of the compressed sprite
	 * @param height Height of the compressed sprite
	 */
	void gfx3_SetObjectCompressedSize(struct gfx3_object_t *gfx3_object, uint16_t width, uint8_t height);

	// Flipping objects
	/**
	 * flips the order of the sprites in the layers or compressed_layers.
	 * @param gfx3_object gfx3_object_t structure.
	 */
	void gfx3_FlipObject(struct gfx3_object_t *gfx3_object);

	// Rotating objects and index
	/**
	 * Rotates a sprite in a object.
	 * @param gfx3_object gfx3_object_t structure.
	 * @param angle angle of rotation.
	 * @param z_index the index/layer you want rotate.
	 */
	void gfx3_RotateObjectLayer(struct gfx3_object_t *gfx3_object, uint8_t angle, uint8_t z_index);

	/**
	 * Rotates a full object.
	 * @param gfx3_object gfx3_object_t structure.
	 * @param angle angle of rotation.
	 */
	void gfx3_RotateObject(struct gfx3_object_t *gfx3_object, uint8_t angle);

	// Displaying Objects
	/**
	 * Prints a noclip object.
	 * @param gfx3_object gfx3_object_t structure.
	 * @param X x position of object.
	 * @param Y y position of object.
	 */
	void gfx3_Object(struct gfx3_object_t *gfx3_object, uint24_t x, uint8_t y);

	/**
	 * Prints a noclip transparent object.
	 * @param gfx3_object gfx3_object_t structure.
	 * @param X x position of object.
	 * @param Y y position of object.
	 */
	void gfx3_TransparentObject(struct gfx3_object_t *gfx3_object, uint24_t x, uint8_t y);

	// Displaying Compressed Objects
	/**
	 * Prints a compressed object.
	 * @param gfx3_object gfx3_object_t structure.
	 * @param X x position of object.
	 * @param Y y position of object.
	 */
	void gfx3_CompressedObject(struct gfx3_object_t *gfx3_object, uint24_t x, uint8_t y);

	/**
	 * Prints a compressed transparent object.
	 * @param gfx3_object gfx3_object_t structure.
	 * @param X x position of object.
	 * @param Y y position of object.
	 */
	void gfx3_CompressedTransparentObject(struct gfx3_object_t *gfx3_object, uint24_t x, uint8_t y);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif