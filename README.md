# BMP Reader - Black and White BMP Image Processor

This program is a **BMP reader** that loads BMP image files, extracts pixel data, and displays the image in black and white format on the console. It reads uncompressed BMP files with 16-bit, 24-bit, and 32-bit color depths and displays the red color channel to generate a binary black and white output.

## Features

- Supports BMP files with bit depths of 16, 24, and 32 bits.
- Handles BMP files with varying header sizes, including:
  - 12-byte (OS/2)
  - 40-byte (Windows BITMAPINFOHEADER)
  - 52-byte, 56-byte, 108-byte, and 124-byte headers.
- Can process BMP files with or without color masks (supports custom color masks).
- Displays BMP as a binary black and white image (using the red color channel).
- Handles row padding in BMP file format (padding to the nearest multiple of 4 bytes).

## How It Works

1. **Opening the BMP file:** The program reads the BMP file header and checks if the file is a valid BMP format. It also reads the image's metadata like width, height, color depth, compression type, and color masks (if applicable).
  
2. **Reading Pixel Data:** The program reads the pixel data row by row, extracting the red, green, blue, and alpha values for each pixel. For images with non-standard masks, the program calculates these masks dynamically.

3. **Displaying BMP in Black and White:** The BMP image is displayed in black and white by printing either a `1` (for black pixels) or a `0` (for white pixels) based on the red color channel. Pixels with any red color value are shown as black.

## Usage

### Compiling the Program

To compile the program, use `g++`:

```bash
g++ -o BMPreader main.cpp BMPreader.cpp -std=c++17
