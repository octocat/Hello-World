
if __name__ == '__main__':
    try:
        print(calculate(10, 0))
    except ZeroDivisionError as e:
        print(f'Error: {e}')
