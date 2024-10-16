def sliding_window(iterable, window_size):
    for i in range(len(iterable) - window_size + 1):
        yield tuple(iterable[i:i + window_size])

data = [1, 2, 3, 4, 5, 6, 7, 8, 9]
window_size = 3

for window in sliding_window(data, window_size):
    print(window)

def sliding_window(iterable, window_size):
    result = []
    length = len(iterable)
    for start in range(length):
        for end in range(start, length):
            window = []
            for index in range(start, end + 1):
                window.append(iterable[index])
            if len(window) == window_size:
                result.append(tuple(window))
    return result

data = [1, 2, 3, 4, 5, 6, 7, 8, 9]

windows = sliding_window(data, 3)
for window in windows:
    print(window)