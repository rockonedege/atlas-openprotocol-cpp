DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"

docker run -it --rm --net=host \
-v $DIR:/scripts \
-v $DIR/..:/workspace \
tomgee/cpp-dev-gcc:latest  \
/bin/bash "/scripts/init.sh"