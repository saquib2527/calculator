All the commands are assumed to be invoked from project root.

### About
Sample project demonstrating the use of bazel, googletest, and cpplint.

### Build
```
bazel build --cxxopt=-std=c++14 src:all
bazel build --cxxopt=-std=c++14 test:all
bazel build --cxxopt=-std=c++14 main:all
```

### Test
```
bazel test --cxxopt=-std=c++14 test:all
```

### Lint
```
cpplint --root=.. $(find src -type f \( -iname \*.h -o -iname \*.cc \))
cpplint --root=.. $(find test -type f \( -iname \*.h -o -iname \*.cc \))
cpplint --root=.. $(find main -type f \( -iname \*.h -o -iname \*.cc \))
```
