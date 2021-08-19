def main():
    data = ("Robin", 10, "chocolates")
    format_string = "Hello %s. You are currently left with %d %s."
    print(format_string %data)
    return 0


if __name__ == '__main__':
    main()