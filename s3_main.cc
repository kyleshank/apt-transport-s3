/*  Copyright (C) 2008,2012 Kyle Shank
    This file is part of apt-s3.

    apt-s3 is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    apt-s3 is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with apt-s3.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <apt-pkg/fileutl.h>
#include <apt-pkg/acquire-method.h>

#include "connect.h"
#include "rfc2553emu.h"
#include "s3.h"


int main()
{
   setlocale(LC_ALL, "");

   HttpMethod Mth;
   return Mth.Loop();
}
