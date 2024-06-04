# Makefile to clean executables in all project directories

# Target to clean executables in all directories
clean:
	@echo "Cleaning up executables..."
	@find . -type f -name "*.exe" -print0 | xargs -0 -r rm -f
	@find . -type f ! -name "*.*" ! -name "Makefile" -print0 | xargs -0 -r rm -f
	@echo "Clean up complete."
