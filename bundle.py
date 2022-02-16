#!/usr/bin/env python3
import os,re,argparse,contextlib

@contextlib.contextmanager
def chdir(target_dir):
    cwd = os.getcwd()
    try:
        os.chdir(target_dir)
        yield
    finally:
        os.chdir(cwd)

pattern = re.compile('#include\s*".+"')
def rec(src):
    with open(src, "r") as f_src:
        for line in f_src:
            if pattern.match(line):
                with chdir(os.path.dirname(os.path.abspath(src))):
                    rec(line.split('"')[1])
            else:
                print(line, end="")

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument('src')
    args = parser.parse_args()
    rec(args.src)
