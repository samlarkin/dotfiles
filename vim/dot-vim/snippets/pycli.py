import argparse
import sys


def main():
    args = cli()
    sys.stderr.write(str(args))
    return


def cli():
    """Parse and return command line arguments"""
    parser = argparse.ArgumentParser()
    parser.add_argument(
        'arg_name',
        type=str,
        default='default value',
        help='help text',
    )
    args = parser.parse_args()
    return args


if __name__ == '__main__':
    main()
