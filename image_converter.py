def main():
    try:
        # Open the file in read mode
        with open("path/to/your/image.ppm", "r") as inputFile:
            # Skip the PPM header (first 3 lines)
            for _ in range(4):
                inputFile.readline()

            # Read the rest of the file (pixel values)
            pixels = []
            for line in inputFile:
                # Split the line into integers and add them to the pixels list
                pixels.extend(map(int, line.split()))

        # Print pixel values in comma-separated format
        print(", ".join(map(str, pixels)))

    except FileNotFoundError:
        print("Error opening file")

if __name__ == "__main__":
    main()
