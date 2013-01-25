## Vulnerabilities

Vulnerability Notes as learning.


## Ref.

* http://jvn.jp/
* http://web.nvd.nist.gov/view/vuln/search
* http://www.kb.cert.org/vuls/
* http://www.jpcert.or.jp/


## How to

You don't have to `make install` ;)  
Let's compare result of gcc and clang with `objdump`.

### make

```
$ ./configure CC=clang (gcc default)
$ make
``

or (If you changed Makefile)

```
$ aclocal
$ autoheader
$ automake -a -c
$ autoconf
$ ./configure
$ make
```

All binaries are into `src`.

### scan-build

* scan-build (`make` needs `-k` option)

```
$ ./configure CC=clang
$ scan-build -V -k make
```

Did you find Vulnerabilities ?
