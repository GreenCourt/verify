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

def rec(src, f_dst):
    with open(src, "r") as f_src:
        for line in f_src:
            if pattern.match(line):
                with chdir(os.path.dirname(os.path.abspath(src))):
                    rec(line.split('"')[1], f_dst)
            else:
                f_dst.write(line)

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument('src')
    parser.add_argument('--output', default='_.cc')
    args = parser.parse_args()
    pattern = re.compile('#include\s*".+"')
    with open(args.output, "w") as f:
        rec(args.src, f)
    print("saved to", args.output)
