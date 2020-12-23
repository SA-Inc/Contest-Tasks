# https://www.codewars.com/kata/5f76c4779164bf001d52c141

def cdnf(truth_table):
    rows = []
    res = ' + '

    for row in truth_table:
        if row[-1] == 1:
            xIdx = 1
            tmpRow = []
            for var in range(0, len(row) - 1):
                x = 'x{}'.format(xIdx) if row[var] == 1 else '~x{}'.format(xIdx)
                xIdx += 1
                tmpRow.append(x)
            rows.append('({})'.format(' * '.join(tmpRow)))
    return res.join(rows)
