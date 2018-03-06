/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * $URL: https://scummvm.svn.sourceforge.net/svnroot/scummvm/scummvm/tags/release-1-2-1/engines/scumm/smush/codec1.cpp $
 * $Id: codec1.cpp 28966 2007-09-19 08:40:12Z peres001 $
 *
 */


#include "common/endian.h"

namespace Scumm {

void smush_decode_codec1(byte *dst, const byte *src, int left, int top, int width, int height, int pitch) {
	byte val, code;
	int32 length;
	int h = height, size_line;

	dst += top * pitch;
	for (h = 0; h < height; h++) {
		size_line = READ_LE_UINT16(src);
		src += 2;
		dst += left;
		while (size_line > 0) {
			code = *src++;
			size_line--;
			length = (code >> 1) + 1;
			if (code & 1) {
				val = *src++;
				size_line--;
				if (val)
					memset(dst, val, length);
				dst += length;
			} else {
				size_line -= length;
				while (length--) {
					val = *src++;
					if (val)
						*dst = val;
					dst++;
				}
			}
		}
		dst += pitch - left - width;
	}
}

} // End of namespace Scumm