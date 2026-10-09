from pathlib import Path
import shutil

DOWNLOADS = Path.home() / "Downloads"
DRY_RUN = True  # Change to False to actually move files

FILE_TYPES = {
    "Images": {".jpg", ".jpeg", ".png", ".gif", ".webp", ".svg"},
    "Documents": {".pdf", ".doc", ".docx", ".txt", ".rtf"},
    "Spreadsheets": {".csv", ".xls", ".xlsx"},
    "Videos": {".mp4", ".mov", ".mkv"},
    "Audio": {".mp3", ".wav", ".m4a"},
    "Archives": {".zip", ".tar", ".gz", ".7z"},
}

for item in DOWNLOADS.iterdir():
    if not item.is_file():
        continue

    category = next(
        (name for name, extensions in FILE_TYPES.items()
         if item.suffix.lower() in extensions),
        "Other",
    )
    destination_folder = DOWNLOADS / category
    destination = destination_folder / item.name

    if destination.exists():
        print(f"Skipped (already exists): {item.name}")
        continue

    print(f"{'Would move' if DRY_RUN else 'Moving'}: {item.name} → {category}/")

    if not DRY_RUN:
        destination_folder.mkdir(exist_ok=True)
        shutil.move(str(item), str(destination))