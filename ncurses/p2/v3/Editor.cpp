void Buffer::insertLine(string line, int n)
{
    line = remTabs(line);                   // Conversion (happens every time)
    lines.insert(lines.begin()+n, line);
}

void Buffer::appendLine(string line)
{
    line = remTabs(line);
    lines.push_back(line);
}

void Buffer::removeLine(int n)
{
    lines.erase(lines.begin()+n);
}