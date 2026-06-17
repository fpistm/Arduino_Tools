#!/bin/sh -
#
# Use the correct dfu-suffix program based on the host
#

# Get the directory where the script is running.
DIR=$(cd "$(dirname "$0")" && pwd)
UNAME_OS="$(uname -s)"
case "${UNAME_OS}" in
  Linux*)
    # Choose dfu-suffix program by arch
    UNAME_ARCH="$(uname -m)"
    case "${UNAME_ARCH}" in
      x86_64)
        DFU_SUFFIX=${DIR}/linux/x86_64/dfu-suffix
        ;;
      aarch64|arm64)
        DFU_SUFFIX=${DIR}/linux/aarch64/dfu-suffix
        ;;
      *)
        echo "Unsupported Linux architecture: ${UNAME_ARCH}."
        exit 1
        ;;
    esac
    ;;
  Darwin*)
    DFU_SUFFIX=${DIR}/macosx/dfu-suffix
    if [ ! -x "${DFU_SUFFIX}" ]; then
      DFU_SUFFIX=/opt/local/bin/dfu-suffix
    fi
    ;;
  Windows*)
    DFU_SUFFIX=${DIR}/win/dfu-suffix.exe
    ;;
  *)
    echo "Unknown host OS: ${UNAME_OS}."
    exit 1
    ;;
esac

# Not found!
if [ ! -x "${DFU_SUFFIX}" ]; then
  echo "$0: error: cannot find ${DFU_SUFFIX}" >&2
  exit 2
fi

# Pass all parameters through
echo "Running ${DFU_SUFFIX} $@"
"${DFU_SUFFIX}" "$@"
