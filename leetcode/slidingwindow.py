def sliding_window(iterable, window_size):
    for i in range(len(iterable) - window_size + 1):
        yield tuple(iterable[i:i + window_size])

data = [1, 2, 3, 4, 5, 6, 7, 8, 9]
window_size = 3

for window in sliding_window(data, window_size):
    print(window)