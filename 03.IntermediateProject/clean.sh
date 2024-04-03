#!/bin/sh
BUILD_DIR=build

if [ -d "$BUILD_DIR" ]; then
  echo "remove ${BUILD_DIR} directory."
  rm -r ${BUILD_DIR}
fi
