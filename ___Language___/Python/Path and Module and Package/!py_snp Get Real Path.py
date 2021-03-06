# https://stackoverflow.com/questions/279237/import-a-module-from-a-relative-path/6098238

import os
import sys
import inspect

# realpath() will make your script run, even if you symlink it :)
cmd_folder = os.path.realpath(
    os.path.abspath(os.path.split(inspect.getfile(inspect.currentframe()))[0])
)

if cmd_folder not in sys.path:
    sys.path.insert(0, cmd_folder)


# Use this if you want to include modules from a subfolder
cmd_subfolder = os.path.realpath(
    os.path.abspath(
        os.path.join(
            os.path.split(inspect.getfile(inspect.currentframe()))[0], "subfolder"
        )
    )
)
if cmd_subfolder not in sys.path:
    sys.path.insert(0, cmd_subfolder)


# [WARNING] DO NOT USE __file__ !!!
cmd_folder = os.path.dirname(os.path.abspath(__file__))
# __file__ fails if the script is called in different ways on Windows.
# __file__ fails if someone does os.chdir() before.
# sys.argv[0] also fails, because it does not always contains the path.
